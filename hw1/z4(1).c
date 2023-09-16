#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    
    int min= INT_MAX;
    for (int i=0; i<n; ++i)
    {
        int a;
        scanf("%i", &a);
        if (a<min)
        min=a;
        
    }
    
    
    printf("Min=%i\n", min);
    
    
    //if( a%2==0 && ((a>=0 && a<=20) ||( a>100 && a<200)))
    //if(( b==a+1 && c==b+1)||(b==a-1 && c==b-1))
    //{printf("Consecutive ");}
    //printf("%3d -> %3d -> %3d\n", i,i*i, i*i*i);
    
    
    return 0;
}

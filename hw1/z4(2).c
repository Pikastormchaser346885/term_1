#include <stdio.h>
#include <limits.h>
int main()
{
    int n,i;
    scanf("%d", &n);
    
    int max= INT_MIN;
    int min= INT_MAX;
    for (int i=0; i<n; ++i)
    {
        int a;
        scanf("%i", &a);
        if (a<min && a%2==0)
        min=a;
        if (a>max && a%2==1)
        max=a;
        
    }
    
    if (max!=INT_MIN && min!=INT_MAX)
    printf("%d%2d", min, max);
    
    if (max==INT_MIN && min==INT_MAX)
    printf("None None");
    
    if (max==INT_MIN && min!=INT_MAX)
    printf("%d None", min);
    
    if (max!=INT_MIN && min==INT_MAX)
    printf("None %d", max);
    //if( a%2==0 && ((a>=0 && a<=20) ||( a>100 && a<200)))
    //if(( b==a+1 && c==b+1)||(b==a-1 && c==b-1))
    //{printf("Consecutive ");}
    //printf("%3d -> %3d -> %3d\n", i,i*i, i*i*i);
    
    
    return 0;
}

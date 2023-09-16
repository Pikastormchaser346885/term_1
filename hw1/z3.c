#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    //if( a%2==0 && ((a>=0 && a<=20) ||( a>100 && a<200)))
    //if(( b==a+1 && c==b+1)||(b==a-1 && c==b-1))
    //{printf("Consecutive ");}
    i=1;
    while(i!=n+1)
    {
        printf("%3d -> %3d -> %3d\n", i,i*i, i*i*i);
        i++;}
    
    return 0;
}

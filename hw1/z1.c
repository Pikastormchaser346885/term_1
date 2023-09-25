#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    if( a%2==0 && ((a>=0 && a<=20) ||( a>100 && a<200)))
    printf("Yes");

    else
    printf("No");
    
    return 0;
}
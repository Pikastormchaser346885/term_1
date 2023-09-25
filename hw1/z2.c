#include <stdio.h>

int main()
{
    float a, b, c;
    scanf("%f%f%f", &a, &b, &c);
    
    if(( b == a + 1 && c == b + 1 )||( b == a - 1 && c == b - 1))
    {printf("Consecutive ");}
    
    if( b > a && c > b)
    {printf("Increasing ");}
    
    if( b < a && c < b)
    {printf("Decreasing ");}
    
    if( b == a && c == b)
    {printf("Equal ");}

    
    if ((b! = a + 1 || c! = b + 1) && ( b <= a || c <= b) && ( b >= a || c >= b) && ( b! = a || c! = b ))
    printf("None");
    
    BB: return 0;
}
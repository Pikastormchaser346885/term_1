#include <stdio.h>

int main()
{
    int n,i;
    scanf("%d", &n);

    i = 1;

    while ( i! = n + 1 )
    {
        printf("%3d -> %3d -> %3d\n", i, i*i, i*i*i);

        i++;
    }
    
    return 0;
}
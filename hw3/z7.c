#include <stdio.h>

int trib(int n)
{
    int a = 0, b = 0, d = 1;

    for (int i = 1; i < n; ++i)
    {
        int temp = a + b+d;
        a = b;
        b = d;
        d = temp;
    }

    return d;
}

int tribrec(int n)
{
    if (n ==1|| n==2)
    return 0;

    if (n ==3)
    return 1;
    return tribrec(n - 1) + tribrec(n - 2) + tribrec(n - 3);
}

int main()
{
    int n, m, i, j, v, b;
    scanf("%d", &v); 

printf("%i\n", tribrec(v+1));

return 0;
}
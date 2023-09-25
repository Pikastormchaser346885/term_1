#include <stdio.h>
#include <math.h>
#include <limits.h>

int main()
{
    int n, i, j, m, a, b, z;
    int sum = 0;
    scanf("%d%d", &n, &m);

    for (i = 1; i <= n; i+ = 1)
    {
        for (j = 1; j <= m; j+ = 1)
        {
            if ((i + j) % 2 == 0)
            z = 1;

            else
            z = -1;
        
            sum + = i * j * z;
        }
    }

    printf("%d  ", sum);

    return 0;
}
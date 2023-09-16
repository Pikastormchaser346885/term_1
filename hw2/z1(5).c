
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
int main()
{
    int a[1000];
    int n;
    scanf("%i",&n);
    for (int i=0; i<n; ++i)
        scanf("%i", &a[i]);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 0) {
            a[j] = a[i];
            j++;
        }
    }

    n = j;

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");


    return 0;
}

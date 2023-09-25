#include <stdio.h>
#include <math.h>
#include <limits.h>
int main()
{
int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  for (int i = a; i <= b; i++) {
    if (i % c == 0) {
      printf("%d ", i);
    }
  }
    return 0;
}

